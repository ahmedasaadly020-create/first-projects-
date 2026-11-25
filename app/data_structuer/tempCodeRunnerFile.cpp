void display()
{
    node* current_node;
    if (head==NULL)
    {
        cout<<"linked list is empty ."<<endl;
    }else
    {
        current_node =head;
        while (current_node!=NULL)
        {
            cout<<current_node->data<<"\t";
            current_node=current_node->next;
        }
        
    }
    
}