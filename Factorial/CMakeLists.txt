#add_library(<name> [STATIC | SHARED | MODULE]
#                   [EXCLUDE_FROM_ALL]
#                    [<source>...])
#
#   Adds a library target called <name> 
#   to be built from the source files listed
#   in the command invocation. The <name> corresponds
#   to the logical target name and must be globally 
#   unique within a project. The actual file name of the
#   library built is constructed based on conventions of the
#   native platform (such as lib<name>.a or <name>.lib).

add_library(Factorial factorial.cpp)