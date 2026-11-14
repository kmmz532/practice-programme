#include "main.h"

// 定数についてマクロの #define でなく const を用いた。型が使える上、想定外の置き換えがないため。
const int MIN = 1;
const int MAX = 100;

// int main() は int main(void) と同様なことが多いが、暗黙的な仕様である、個人的にはvoidを書くのは他の言語をやってきた身としてあまり好まないので引数を置いた（使ってもよさそうだが・・・）
int main(int argc, char* argv[]) {
    print(MIN, MAX);
    return 0;
}

void print(int min, int max) {
    for (auto i = min; i <= max; ++i) {
        cout << i << " ";
        if (i % 3 == 0) cout << "Fizz";
        if (i % 5 == 0) cout << "Buzz";
        
        cout << endl;
    }
}
