import torch
from torchvision import models

# Load the pre-trained ResNet50 model
model = models.resnet50()
model.eval()  # set the model to evaluation mode

# Create fake input data (simulating a single 224x224 RGB image)
# Note: ResNet50 expects inputs of shape [batch_size, 3, 224, 224]
fake_input = torch.randn(1, 3, 224, 224)

# Run inference (forward pass) with no gradient tracking
with torch.no_grad():
    output = model(fake_input)

# Print the output shape, which should be [1, 1000] (1000 ImageNet classes)
print("Output shape:", output.shape)

# (Optional) Get the top-5 predicted class indices from the output
top5_prob, top5_catid = torch.topk(output, k=5)
print("Top 5 class indices:", top5_catid.squeeze().tolist())