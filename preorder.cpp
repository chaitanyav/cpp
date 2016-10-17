#include <iostream>
#include <stack>

template<typename tVal>
class BinaryTree
{
public:
  tVal v_;
  BinaryTree<tVal> *left;
  BinaryTree<tVal> *right;

  BinaryTree(tVal v): v_(v), left(NULL), right(NULL) {}
  
};

template<typename tVal>
void nonRecursivePreOrder(BinaryTree<tVal> *root) {
  std::stack<BinaryTree<tVal> *>s;

  while(true) {
    while(root) {
      std::cout << "v=" << root->v_;
      s.push(root);
      root = root->left;
    }
    if(s.empty()) {
      break;
    }

    root = s.top();
    s.pop();
    root = root->right;
  }
}

int main() {
  BinaryTree<int> s(6);
  s.left = new BinaryTree<int>(3);
  s.right = new BinaryTree<int>(4);
  nonRecursivePreOrder(&s);
}
