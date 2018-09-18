ex1 -

The using declarations should go in the innermost namespace (including
the topmost/largest anonymous namespace).


ex2 -

The using declarations should go in the innermost namespace (including
the topmost/largest anonymous namespace).


ex3 -

If there isn't an anonymous namespace, don't add one.

ex4 -

If there are two disparate namespaces, we may not know which one to
move declarations into.  (Alternatively: figure out if "something" is
used without a namespace qualifier inside either of those namespace
blocks and move the declaration there? Practically speaking, most .cc
files should have code in only one namespace OR one namespace + a
nested anonymous namespace).

ex5 -

If there are two disparate namespaces, it's probably the case that we
care about the one that has definitions (not just declarations).

ex6 -

There's a chance that a non-fully-qualified declaration is actually
relative to a further nested namespace - in this case, converting to
"using ::bar::SomeType" would either be a build break or a change in
behavior - the correct rewrite is to fully qualify into "using
::foo::bar::SomeType".

ex7 -

Fully qualify things, and sort them.

ex8 -

A harder example of sorting (follow the sorting logic in clang-format).

