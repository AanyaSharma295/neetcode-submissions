class Solution {
public:

    string encode(vector<string>& strs) {

        string s;

        for(int i=0;i<strs.size();i++){

            s += to_string(strs[i].size());

            s.push_back('#');

            for(int j=0;j<strs[i].size();j++){

                s.push_back(strs[i][j]);
            }
        }

        return s;
    }

    vector<string> decode(string s) {

        vector<string> ans;

        int i = 0;

        while(i < s.size()) {

            int j = i;

            // find #
            while(s[j] != '#'){
                j++;
            }

            // extract length
            int len =
                stoi(s.substr(i, j-i));

            // extract word
            string temp =
                s.substr(j+1, len);

            ans.push_back(temp);

            // move ahead
            i = j + 1 + len;
        }

        return ans;
    }
};