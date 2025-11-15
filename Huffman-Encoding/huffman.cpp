#include <bits/stdc++.h>
using namespace std;

struct MinHeapNode {
    char data;
    int freq;
    MinHeapNode *left, *right;
    MinHeapNode(char data, int freq) {
        left = right = nullptr;
        this->data = data;
        this->freq = freq;
    }
};

// Compare for priority queue (min-heap)
struct compare {
    bool operator()(MinHeapNode* a, MinHeapNode* b) {
        return (a->freq > b->freq);
    }
};

// Generate codes from the Huffman tree
void storeCodes(MinHeapNode* root, string str, unordered_map<char, string> &huffmanCodes) {
    if (!root) return;
    if (root->data != '$') // internal node marked as $
        huffmanCodes[root->data] = str;
    storeCodes(root->left, str + "0", huffmanCodes);
    storeCodes(root->right, str + "1", huffmanCodes);
}

// Build Huffman Tree and return root
MinHeapNode* buildHuffmanTree(char data[], int freq[], int size) {
    MinHeapNode *left, *right, *top;
    priority_queue<MinHeapNode*, vector<MinHeapNode*>, compare> minHeap;
    for (int i = 0; i < size; i++)
        minHeap.push(new MinHeapNode(data[i], freq[i]));
    while (minHeap.size() != 1) {
        left = minHeap.top(); minHeap.pop();
        right = minHeap.top(); minHeap.pop();
        top = new MinHeapNode('$', left->freq + right->freq);
        top->left = left;
        top->right = right;
        minHeap.push(top);
    }
    return minHeap.top();
}

// Encode a given string
string encode(string text, unordered_map<char, string> &huffmanCodes) {
    string encodedStr = "";
    for (char c : text)
        encodedStr += huffmanCodes[c];
    return encodedStr;
}

// Decode a Huffman encoded string
string decode(MinHeapNode* root, string encodedStr) {
    string decodedStr = "";
    MinHeapNode* curr = root;
    for (char bit : encodedStr) {
        if (bit == '0') curr = curr->left;
        else curr = curr->right;
        if (!curr->left && !curr->right) {
            decodedStr += curr->data;
            curr = root;
        }
    }
    return decodedStr;
}

int main() {
    char data[] = {'A', 'B', 'C', 'D'};
    int freq[] = {23, 12, 34, 10};
    int size = sizeof(data) / sizeof(data[0]);

    // Step 1: Build Huffman Tree
    MinHeapNode* root = buildHuffmanTree(data, freq, size);

    // Step 2: Generate Huffman Codes
    unordered_map<char, string> huffmanCodes;
    storeCodes(root, "", huffmanCodes);
    cout << "Huffman Codes:\n";
    for (auto pair : huffmanCodes)
        cout << pair.first << " : " << pair.second << "\n";

    // Step 3: Encode a message
    string text = "ABCD";
    string encodedStr = encode(text, huffmanCodes);
    cout << "\nOriginal text: " << text;
    cout << "\nEncoded text: " << encodedStr;

    // Step 4: Decode back
    string decodedStr = decode(root, encodedStr);
    cout << "\nDecoded text: " << decodedStr;

    // Step 5: Compare lengths
    cout << "\nOriginal bits (8-bit ASCII): " << text.size() * 8;
    cout << "\nEncoded bits (Huffman): " << encodedStr.size() << endl;

    return 0;
}
