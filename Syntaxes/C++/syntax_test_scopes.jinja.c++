## SYNTAX TEST "C++ (Jinja).sublime-syntax"

  {% if true %}
##^^^^^^^^^^^^^ meta.embedded.statement.jinja
##^^ punctuation.section.embedded.begin.jinja
##   ^^ keyword.control.conditional.if.jinja
##      ^^^^ constant.language.boolean.jinja
##           ^^ punctuation.section.embedded.end.jinja

  {% else %}
##^^^^^^^^^^ meta.embedded.statement.jinja
##^^ punctuation.section.embedded.begin.jinja
##   ^^^^ keyword.control.conditional.else.jinja
##        ^^ punctuation.section.embedded.end.jinja

  {% endif %}
##^^^^^^^^^^^ meta.embedded.statement.jinja
##^^ punctuation.section.embedded.begin.jinja
##   ^^^^^ keyword.other.endtag.jinja
##         ^^ punctuation.section.embedded.end.jinja

function foo () {

  {% if true %}
##^^^^^^^^^^^^^ meta.function.c++ meta.block.c++ meta.embedded.statement.jinja
##^^ punctuation.section.embedded.begin.jinja
##   ^^ keyword.control.conditional.if.jinja
##      ^^^^ constant.language.boolean.jinja
##           ^^ punctuation.section.embedded.end.jinja

  {% else %}
##^^^^^^^^^^ meta.function.c++ meta.block.c++ meta.embedded.statement.jinja
##^^ punctuation.section.embedded.begin.jinja
##   ^^^^ keyword.control.conditional.else.jinja
##        ^^ punctuation.section.embedded.end.jinja

  {% endif %}
##^^^^^^^^^^^ meta.function.c++ meta.block.c++ meta.embedded.statement.jinja
##^^ punctuation.section.embedded.begin.jinja
##   ^^^^^ keyword.other.endtag.jinja
##         ^^ punctuation.section.embedded.end.jinja

}
