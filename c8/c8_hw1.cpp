#include <iostream>
using namespace std;

int main() {
    string input, letter, word, output;
    string alphabet = "abcdefghijklmnopqrstuvwxyz", vowel = "aeiou";
    cin >> input;
    int alphabetLength = alphabet.length(), inputLength = input.length();
    for (int i = 0; i < inputLength; i++) {
        letter = input[i];
        word = letter;
        int letterInVowel = vowel.find(letter);
        if (letterInVowel == -1) {
            int Index = alphabet.find(letter);
            for (int i2 = 1; true; i2++) {
                if ((Index - i2) > -1) {
                    int vowelBeforeIndex = vowel.find(alphabet[Index - i2]);
                    if (vowelBeforeIndex != -1) {
                        word += alphabet[Index - i2];
                        break;
                    }
                }
                if ((Index + i2) < (alphabetLength - 1)) {
                    int vowelAfterIndex = vowel.find(alphabet[Index + i2]);
                    if (vowelAfterIndex != -1) {
                        word += alphabet[Index + i2];
                        break;
                    }
                }
            }
            if (letter == "z") {
                word += letter;
            } else {
                for (int i2 = 1; true; i2++) {
                    int consonantAfterIndex = vowel.find(alphabet[Index + i2]);
                    if (consonantAfterIndex == -1) {
                        word += alphabet[Index + i2];
                        break;
                    }
                }
            }
        }
        output += word;
    }
    cout << output << endl;
}
