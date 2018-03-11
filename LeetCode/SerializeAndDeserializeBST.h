/*
 * File   : SerializeAndDeserializeBST
 * Author : KsGin 
 * Date   : 2018/3/11
 */

#ifndef LEETCODE_SERIALIZEANDDESERIALIZEBST_H
#define LEETCODE_SERIALIZEANDDESERIALIZEBST_H

#include <string>
#include <queue>
#include <sstream>

using namespace std;

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
};

class Codec {
public:
    // Encodes a tree to a single string.
    string serialize(TreeNode* root) {
        ostringstream os;
        serialize(root, os);
        return os.str();
    }

    // Decodes your encoded data to tree.
    TreeNode* deserialize(string data) {
        istringstream is(data);
        return deserialize(is);
    }
    void serialize(TreeNode* root, ostringstream& os) {
        if (!root) os << "# ";
        else {
            os << root->val << " ";
            serialize(root->left, os);
            serialize(root->right, os);
        }
    }
    TreeNode* deserialize(istringstream& is) {
        string val = "";
        is >> val;
        if (val == "#") return NULL;
        TreeNode* node = new TreeNode(stoi(val));
        node->left = deserialize(is);
        node->right = deserialize(is);
        return node;
    }
};

// Your Codec object will be instantiated and called as such:
// Codec codec;
// codec.deserialize(codec.serialize(root));

#endif //LEETCODE_SERIALIZEANDDESERIALIZEBST_H
