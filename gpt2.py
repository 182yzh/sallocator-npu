import torch
import torch_npu  # 确保已正确安装并配置好华为 Ascend NPU 环境
from transformers import AutoTokenizer, AutoModelForCausalLM

# 指定使用的 NPU 设备
device = torch.device("npu:0")

# 加载 tokenizer 和模型，并迁移到 NPU 设备上
tokenizer = AutoTokenizer.from_pretrained("openai-community/gpt2")
model = AutoModelForCausalLM.from_pretrained("openai-community/gpt2").to(device)

text = "tell me something about GPT2."

# 将输入数据转换为 tensor，并迁移到 NPU 设备上
inputs = tokenizer.encode(text, return_tensors='pt').to(device)

# 调用 generate 方法进行推理
outputs = model.generate(
    inputs, 
    max_length=100, 
    do_sample=True, 
    num_beams=5, 
    no_repeat_ngram_size=2, 
    early_stopping=True
)

# 将输出从 NPU 设备中取回 CPU，并解码
generated_text = tokenizer.decode(outputs[0].cpu(), skip_special_tokens=True)
print(generated_text)
