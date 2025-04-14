num_funcs = 1000
func_len = 1000000

with open('test.h', 'w') as h_fp:
  s = ''
  for i in range(num_funcs):
    s += f'int func_{i}();\n'
  h_fp.write(s)

with open('test.c', 'w') as c_fp:
  s = '#include "test.h"\n'
  s += '\n'
  s += '\n'
  for i in range(num_funcs):
    s += f'int func_{i}(){{\n'
    s += f'  int res = 0;\n'
    s += f'  for(int i = {i}; i < {func_len}; i++){{\n'
    s += f'    res += i;\n'
    s += f'  }}\n'
    s += f'  return res;\n'
    s += f'}}\n'
  c_fp.write(s)



