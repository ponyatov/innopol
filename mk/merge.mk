MERGE += Makefile README.md LICENSE
MERGE += apt.* .doxygen .gitignore
MERGE += .clang-format .prettierrc .editorconfig .gitattributes
MERGE += $(MK) $(CM) $(C) $(H) $(S) $(P) $(R)
MERGE += .vscode bin doc lib inc src tmp ref
MERGE += hw cpu arch os
MERGE += mk cmake CMake*

.PHONY: dev
dev:
	git checkout dev
	git merge $(USER) -- $(MERGE)
