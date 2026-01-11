So we have:

Arrays: Where elements are indexed by a value.

Hash Tables: The hash code has a value that is attached to a linked list.

Tries combine structures and pointer together to store data in an interesting way. The data can be serached for via a roadmap. If its not found on the roadmap, it must not exist.

It maps key-value pairs where the keys acts a root and the values act as leaves, branching out from the root. To add an element, you simply need to follow along the root to the correspodnign leaf. Each leaf can hold up to ten nodes, one for each digit. In code this may look like.

typedef struct _trie
{
	char KEY[x]
	struct _trie* paths[x]
}
trie;

