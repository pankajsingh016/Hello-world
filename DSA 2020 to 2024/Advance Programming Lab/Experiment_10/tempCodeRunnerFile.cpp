int main()
{
    // Treap keys
    int keys[] = { 5, 2, 1, 4, 9, 8, 10 };
 
    int n = sizeof(keys)/sizeof(int);
 
    // Construct a treap
    TreapNode* root = nullptr;
    srand(time(nullptr));
 
    for (int key: keys) {
        insertNode(root, key);
    }
 
    cout << "Constructed treap:\n\n";
    printTreap(root);
 
    cout << "\nDeleting node 1:\n\n";
    deleteNode(root, 1);
    printTreap(root);
 
    cout << "\nDeleting node 5:\n\n";
    deleteNode(root, 5);
    printTreap(root);
 
    cout << "\nDeleting node 9:\n\n";
    deleteNode(root, 9);
    printTreap(root);
 
    return 0;
}