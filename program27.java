//DS in java SinglyLL
import java.util.*;

class program27
{
    public static void main(String arg[])
    {   
        SinglyLL obj = new SinglyLL();

        obj.insertFirst(51);
        obj.insertFirst(21);
        obj.insertFirst(11);

        obj.insertLast(101);
        obj.insertLast(111);
        obj.insertLast(121);

        pbj.InsertAtPos(55,4);

        obj.Display();
    
        System.out.println("Number of elements are: "+obj.Count());
        obj.DeleteAtPos(4);
        obj.Display();
        System.out.println("Number of elements are: "+obj.Count());

        obj.DeleteFirst();
        obj.DeleteLast();

        obj.Display();

        System.out.println("Number of elements are: "+obj.Count());

    }
}

class Node
{
    public int data;
    public Node next;

    public Node(int no)
    {
        this.data = no;
        this.next = null;
    }
}

class SinglyLL
{
    public Node first;
    public int iCount;

    public SinglyLL()
    {
        this.first = null;
        this.iCount = 0;
    }
////////////////////////////////////////////////////
    public void Display()
    {
        System.out.println("Elements of LL ar: ");

        Node temp = first;
        while(temp != null)
        {
            System.out.println("|" +temp.data+"|->");
            temp = temp.next;
        }
        System.out.println("null");
    }
    public int Count()
    {
        return this.iCount;
    }
    public void insertFirst(int no)
    {
        Node newn = new Node(no);

        if(first == null)
        {
            first = newn;

        }
        else
        {
            newn.next = first;
            first = newn;
        }
        iCount++;
    }
    public void insertLast(int no)
    {
        Node newn = new Node(no);

        if(first == null)
        {
            first = newn;

        }
        else
        {
            Node temp = first;
            while(temp != null)
            {
                temp = temp.next;
            }
            temp.next = newn;
        }
        iCount++;
    }
    public void InsertAtPos(int no, int iPos)
    {
        int iSize = Count();

        if((iPos < 1) || (iPos > iSize +1))
        {
            System.out.println("Invalid position");
            return;
        }

        if(iPos == 1)
        {
            insertFirst(no);
        }
        else if(iPos == iSize +1)
        {
            insertLast(no);
        }
        else
        {
            Node temp = first;
            for(int iCnt = 1; iCnt< iPos - 1; iCnt++)
            {
                temp = temp.next;
            }
            Node newn = new Node(no);
            newn.next = temp.next;
            temp.next = newn;
            iCount++;
        }
    }
    public void DeleteFirst()
    {
        if(first == null)
        {
            return;
        }
        if(first.next == null)
        {
            first == null;
        }
        else
        {
            first = first.next;
        }
        iCount--;
    }
    public void DeleteLast()
    {
        if(first == null)
        {
            return;
        }
        if(first.next == null)
        {
            first = null;
        }
        else
        {
            Node temp = first;

            while(temp.next.next != null)
            {
                temp = temp.next;
            }
            temp.next = null;
            iCount--;

        }
    }
    public void DeleteAtPos()
    {
        int iSize = Count();

        if((iPos < 1) || (iPos > iSize ))
        {
            System.out.println("Invalid position");
            return;
        }

        if(iPos == 1)
        {
            DeleteFirst(no);
        }
        else if(iPos == iSize +1)
        {
            DeleteLast(no);
        }
        else
        {
            Node temp = first;
            for(int iCnt = 1; iCnt< iPos - 1; iCnt++)
            {
                temp = temp.next;
            }
            temp.next = temp.next.next;
            iCount--;
        }
    }

}

