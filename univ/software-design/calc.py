import re

# 字句解析
def tokenize(line: str) -> list:
    tokens = [] # 字句リスト
    pos = 0 # 解析位置

    while pos < len(line):
        # 正規表現、スペースで切り分ける   ↓ 解析対象からの位置から始まる文字列
        match = re.match(r'\s*([()]|[^\s()]+)', line[pos:])
        if match is None: break # 何もないので終わる
        
        tokens.append(match.group(1)) # 正規表現のキャプチャグループで得た字句をtokensに入れる
        pos += match.end() # マッチした部分の文字数だけ位置を進める

    return tokens

# print(tokenize("1 + 3"))
# print(tokenize("1 +3"))

# 構文解析
def parse(tokens: list):
    token = tokens.pop(0) # 先頭の字句を取り出す
    if token != '(': return token
    arr = [] # 括弧で囲まれたものをリストにする
    while tokens[0] != ')': # 括弧閉じが来るまで
        arr.append(parse(tokens)) # リストに入れる構文解析をする
    
    tokens.pop(0) # 括弧閉じを取り出す
    return arr

# ['1', '+', '3', '*', ['3', '+', '4']]
print(parse(tokenize("(1 + 3 * (3 + 4))")))
