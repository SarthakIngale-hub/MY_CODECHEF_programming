#include <string>
#include <vector>
#include <unordered_map>
#include <unordered_set>
#include <algorithm>
#include <cctype>

class Solution {
public:
    std::string mostCommonWord(std::string paragraph, std::vector<std::string>& banned) {
        std::unordered_set<std::string> bannedSet(banned.begin(), banned.end());

        for (char &c : paragraph) {
            if (std::ispunct(c)) {
                c = ' ';
            } else {
                c = std::tolower(c);
            }
        }

        std::unordered_map<std::string, int> wordCount;
        std::string word;
        for (int i = 0; i <= paragraph.length(); ++i) {
            if (i < paragraph.length() && paragraph[i] != ' ') {
                word += paragraph[i];
            } else {
                if (!word.empty()) {
                    if (bannedSet.find(word) == bannedSet.end()) {
                        wordCount[word]++;
                    }
                    word.clear();
                }
            }
        }

        std::string result = "";
        int maxFreq = 0;
        for (auto const& [currentWord, count] : wordCount) {
            if (count > maxFreq) {
                maxFreq = count;
                result = currentWord;
            }
        }
        
        return result;
    }
};
