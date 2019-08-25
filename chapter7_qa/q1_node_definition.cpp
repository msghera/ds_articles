struct node{
    int data, next;
    // so it can be seen that the prev and next is also of
    // integer type rather than pointer

    node(int _data){
        data = _data;
        next = -1;
    }
};
