class Solution {
public:
    string simplifyPath(string path) {
        vector<string> directories;
        string directory;

        stringstream ss(path);

        while(getline(ss, directory, '/')){
            if(directory.empty() || directory == "."){
                continue;
            }

            if(directory == ".."){
                if(!directories.empty()){
                    directories.pop_back();
                }
            }else{
                directories.push_back(directory);
            }
        }

        string result;


        for(string x : directories){
            result += "/" + x;
        }

        if(result == ""){
            return "/";
        }

        return result;
    }
};