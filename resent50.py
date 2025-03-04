import time
start = time.time()
import torch

import torch_npu
from torchvision import models

after_torch = time.time()
# Load the pre-trained ResNet50 model
model = models.resnet50()
model = model.npu("npu:0")
model.eval()  # set the model to evaluation mode
cnt = 0
max_cnt=100
fake_input = [ torch.randn(1, 3, 224, 224).to("npu:0") for i in range(max_cnt)]
# fake_input = fake_input.to("npu:0")
afterload= time.time()    
last_time = time.time()

while cnt < max_cnt:
    if cnt% 1 == 0 and cnt !=0 :
        print("infer cnt: 1", "time consume average:" , (time.time() - last_time)/1 )
        last_time = time.time()
    
    # Create fake input data (simulating a single 224x224 RGB image)
    # Note: ResNet50 expects inputs of shape [batch_size, 3, 224, 224]
    # Run inference (forward pass) with no gradient tracking
    with torch.no_grad():
        output = model(fake_input[cnt])
    cnt += 1

# Print the output shape, which should be [1, 1000] (1000 ImageNet classes)
# print("Output shape:", output.shape)
after_infer = time.time()
# (Optional) Get the top-5 predicted class indices from the output
# top5_prob, top5_catid = torch.topk(output, k=5)
# print("Top 5 class indices:", top5_catid.squeeze().tolist())

print(start,after_torch,afterload, )
print("load torch: ", after_torch - start)
print("load model: ", afterload - after_torch )
print("inference : ",after_infer -afterload )