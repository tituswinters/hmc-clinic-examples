ex1 -

Basic example - use make_unique + auto when initializing a unique_ptr

ex2 -

When resetting a unique_ptr, use make_unique.

ex3 -

When resetting with something other than a call to "new", use WrapUnique.

ex4 -

Use WrapUnique + auto when initializing a unique_ptr without a direct
call to "new".

ex5 -

If we can see that a pointer is allocated and deallocated within just
a block, maybe we should move to automatic memory management.  (Seems
like a stretch goal - also requires identifying use of the pointer and
passing unique_ptr::get() instead, or handling of dereferencing the
pointer, etc).
