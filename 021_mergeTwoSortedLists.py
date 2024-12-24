class ListNode(object):
    def __init__(self, val=0, next=None):
        self.val = val
        self.next = next 

class Solution(object):
    def mergeTwoLists(self, list1, list2):
        dummy = ListNode()
        current = dummy 

        while list1 and list2:
            if list1.val <= list2.val:
                current.next = list1
                list1 = list1.next 
            else:
                current.next = list2
                list2 = list2.next 
            current = current.next 

        if list1:
            current.next = list1
        elif list2:
            current.next = list2 

        return dummy.next

if __name__ == "__main__":
    def create_linked_list(values):
        if not values:
            return None
        head = ListNode(values[0])
        current = head
        for value in values[1:]:
            current.next = ListNode(value)
            current = current.next
        return head

    def print_linked_list(head):
        values = []
        while head:
            values.append(head.val)
            head = head.next
        print(values)

    list1 = create_linked_list([1, 2, 4])
    list2 = create_linked_list([1, 3, 4])

    solution = Solution()
    merged_list = solution.mergeTwoLists(list1, list2)
    print_linked_list(merged_list)