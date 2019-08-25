struct node{
    int data, prev, next;
    // so it can be seen that the prev and next is also of
    // integer type rather than pointer

    node(int _data){
        data = _data;
    }
};
