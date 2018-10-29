/ul>
<h4 class="task">
    7. Get node at index
      <span class="alert alert-warning mandatory-optional">
        mandatory
      </span>
</h4>
<p>Write a function that returns the nth node of a <code>listint_t</code> linked list.</p>
<ul>
<li>Prototype: <code>listint_t *get_nodeint_at_index(listint_t *head, unsigned int index);</code></li>
<li>where <code>index</code> is the index of the node, starting at <code>0</code></li>
<li>if the node does not exist, return <code>NULL</code></li>
</ul>
<h4 class="task">
    8. Sum list
      <span class="alert alert-warning mandatory-optional">
        mandatory
      </span>
</h4>
<p>Write a function that returns the sum of all the data (n) of a <code>listint_t</code> linked list.</p>
<ul>
<li>Prototype: <code>int sum_listint(listint_t *head);</code></li>
<li>if the list is empty, return <code>0</code></li>
</ul>
<h4 class="task">
    9. Insert
      <span class="alert alert-warning mandatory-optional">
        mandatory
      </span>
</h4>
<p>Write a function that inserts a new node at a given position.</p>
<ul>
<li>Prototype: <code>listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n);</code></li>
<li>where <code>idx</code> is the index of the list where the new node should be added. Index starts at <code>0</code></li>
<li>Returns: the address of the new node, or <code>NULL</code> if it failed</li>
<li>if it is not possible to add the new node at index <code>idx</code>, do not add the new node and return <code>NULL</code></li>
</ul>
<h4 class="task">
    10. Delete at index
      <span class="alert alert-warning mandatory-optional">
        mandatory
      </span>
</h4>
<p>Write a function that deletes the node at index <code>index</code> of a <code>listint_t</code> linked list.</p>
<ul>
<li>Prototype: <code>int delete_nodeint_at_index(listint_t **head, unsigned int index);</code></li>
<li>where <code>index</code> is the index of the node that should be deleted. Index starts at <code>0</code></li>
<li>Returns: <code>1</code> if it succeeded, <code>-1</code> if it failed</li>
</ul>
