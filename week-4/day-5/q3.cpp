

class Codec {
public:

    //Serialize
    void preorder(TreeNode* root, string &ans) {
        if (root == NULL) {
            ans += "N,";
            return;
        }

        ans += to_string(root->val) + ",";
        preorder(root->left, ans);
        preorder(root->right, ans);
    }

    string serialize(TreeNode* root) {
        string ans = "";
        preorder(root, ans);
        return ans;
    }

    //Deserialize
    TreeNode* build(vector<string>& nodes, int &index) {
        if (nodes[index] == "N") {
            index++;
            return NULL;
        }

        TreeNode* root = new TreeNode(stoi(nodes[index++]));

        root->left = build(nodes, index);
        root->right = build(nodes, index);

        return root;
    }

    TreeNode* deserialize(string data) {
        vector<string> nodes;
        string temp = "";

        for (char ch : data) {
            if (ch == ',') {
                nodes.push_back(temp);
                temp = "";
            } else {
                temp += ch;
            }
        }

        int index = 0;
        return build(nodes, index);
    }
};

