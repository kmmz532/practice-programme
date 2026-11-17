import re

def tokenize(line: str) -> list:
    tokens = []
    pos = 0 # 解析位置

    while pos < len(line):
        # 正規表現、スペースで切り分ける   ↓ 解析対象からの位置から始まる文字列
        match = re.match(r'\s*([()]|[^\s()]+)', line[pos:])
        if match is None: break # 何もないので終わる
        
        tokens.append(match.group(1)) # 正規表現のキャプチャグループをtokensに入れる
        pos += match.end() # マッチした部分の文字数だけ位置を進める

    return tokens
    
print(tokenize("1 + 3")) # 1 + 3
print(tokenize("1 +3")) # 1, +3
