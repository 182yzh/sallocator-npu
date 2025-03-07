

import torch
# import torch_npu 
from transformers import AutoTokenizer, AutoModelForCausalLM, GenerationConfig

# device = torch.device("npu:0")


model_name = "deepseek-ai/DeepSeek-V2-Lite"
tokenizer = AutoTokenizer.from_pretrained(model_name, trust_remote_code=True)
# model = AutoModelForCausalLM.from_pretrained(model_name, trust_remote_code=True, torch_dtype=torch.bfloat16).to(device)
model = AutoModelForCausalLM.from_pretrained(model_name, trust_remote_code=True, torch_dtype=torch.bfloat16)
model.generation_config = GenerationConfig.from_pretrained(model_name)
model.generation_config.pad_token_id = model.generation_config.eos_token_id

text = "An attention function can be described as mapping a query and a set of key-value pairs to an output, where the query, keys, values, and output are all vectors. The output is"
inputs = tokenizer(text, return_tensors="pt")
# outputs = model.generate(**inputs.to(device), max_new_tokens=100)
outputs = model.generate(**inputs, max_new_tokens=100)

result = tokenizer.decode(outputs[0], skip_special_tokens=True)
print(result)



# 加载 tokenizer 和模型，并迁移到 NPU 设备上
tokenizer = AutoTokenizer.from_pretrained("openai-community/gpt2")
model = AutoModelForCausalLM.from_pretrained("openai-community/gpt2").to(device)

# Load model directly
from transformers import AutoModelForCausalLM
model = AutoModelForCausalLM.from_pretrained("deepseek-ai/DeepSeek-V2-Lite", trust_remote_code=True)

text = "tell me something about GPT2."

# 将输入数据转换为 tensor，并迁移到 NPU 设备上
inputs = tokenizer.encode(text, return_tensors='pt').to(device)

# 调用 generate 方法进行推理
outputs = model.generate(
    inputs, 
    max_length=200, 
    do_sample=True, 
    num_beams=5, 
    no_repeat_ngram_size=2, 
    early_stopping=True
)

# 将输出从 NPU 设备中取回 CPU，并解码
generated_text = tokenizer.decode(outputs[0].cpu(), skip_special_tokens=True)
print(generated_text)
