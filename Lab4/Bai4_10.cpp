// Pham Ngoc Tuyen - 20235455 - 750829
#include <iostream>
#include <vector>
#include <string>
#include <unordered_map>
#include <cmath>
#include <sstream>

using namespace std;
vector<string> splitParagraph(const string& input_55);
struct Paragraph {
    unordered_map<string, int> wordsFreq_55; // Word count in the paragraph
    int totalWords_55 = 0; // Total number of words in the paragraph
    int maxFreq_55 = 0; // Maximum frequency of any word in the paragraph


    Paragraph(string input_55) {
        vector<string> words_55 = splitParagraph(input_55);
        for (const auto& x_55 : words_55) {
            wordsFreq_55[x_55]++;
            totalWords_55++;
        }
        for (auto x_55 : wordsFreq_55) {
            if (x_55.second > maxFreq_55) {
                maxFreq_55 = x_55.second;
            }
        }
    }

    bool contains(const string& word_55) const {
        return wordsFreq_55.find(word_55) != wordsFreq_55.end();
    }
};

vector<Paragraph> document_55;
int N_55, Q_55;

unordered_map<string, double> idfCache_55;

double idf(const string& word, vector<Paragraph>& document) {
    // Kiểm tra cache trước
    auto it = idfCache_55.find(word);
    if (it != idfCache_55.end()) {
        return it->second;
    }

    int count = 0;
    for (const auto& paragraph : document) {
        if (paragraph.contains(word)) {
            count++;
        }
    }
    double value = (count == 0) ? 0.0 : log(static_cast<double>(document.size()) / count);
    idfCache_55[word] = value; // Lưu vào cache
    return value;
}

double tf(const string& word, const Paragraph& paragraph) {
    if (!paragraph.contains(word)) return 0.0;
    return 0.5 + 0.5 * (static_cast<double>(paragraph.wordsFreq_55.at(word)) / paragraph.maxFreq_55);
}

vector<string> splitParagraph(const string& input_55) {
    vector<string> words;
    words.reserve(input_55.length() / 2); // Dự đoán số từ

    stringstream ss(input_55);
    string word;
    while (getline(ss, word, ',')) {
        words.push_back(word);
    }
    return words;
};
void input() {
    cin >> N_55;
    cin.ignore(); // Bỏ qua ký tự xuống dòng

    // Thay vì dùng resize(), ta dùng reserve() để đặt trước bộ nhớ
    document_55.reserve(N_55);

    for (int i = 0; i < N_55; ++i) {
        string input_55;
        getline(cin, input_55);
        // Thêm trực tiếp Paragraph mới vào vector
        document_55.push_back(Paragraph(input_55));
    }
}
void output() {
    cin >> Q_55;
    cin.ignore();

    // Tính trước tất cả giá trị IDF
    for (const auto& paragraph : document_55) {
        for (const auto& pair : paragraph.wordsFreq_55) {
            if (idfCache_55.find(pair.first) == idfCache_55.end()) {
                idf(pair.first, document_55);
            }
        }
    }

    for (int i = 0; i < Q_55; ++i) {
        string query;
        getline(cin, query);
        vector<string> temp = splitParagraph(query);
        int bestParagraphIndex = -1;
        double bestScore = -1.0;

        for (int j = 0; j < N_55; ++j) {
            double score = 0.0;
            for (const auto& word : temp) {
                score += tf(word, document_55[j]) * idfCache_55[word];
            }
            if (score > bestScore) {
                bestScore = score;
                bestParagraphIndex = j;
            }
        }
        cout << bestParagraphIndex + 1 << endl;
    }
}
    
int main() {
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    cout << "-----------Pham Ngoc Tuyen - 20235455-------" << endl;
    input();
    output();
    return 0;
}
// Pham Ngoc Tuyen - 20235455 - 750829