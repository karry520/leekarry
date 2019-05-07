import os

line = ''
dirname = ''
with open('./Deep-learning.tex','r') as f:
    lines = f.readlines()
    for i in range(0, len(lines)-1):
        if lines[i] != '\n':
            str = lines[i].split('\\')[1].split('{')[0]
            if str == 'chapter':
                dirname = lines[i].split('{')[1].split('}')[0]
                os.mkdir('./'+ dirname)
                line += lines[i]
                continue
            filename=lines[i].split('{')[1].split('}')[0]
            path = './'+ dirname+ '/'+filename + '.tex'
            os.mknod(path)

            tex = open(path, 'w')
            tex.write(lines[i])
            line += "\\input{./chapter/深度学习/"+ dirname + "/"+filename+"}\n"

with open('./Deep-learning.tex','w') as t:
    t.write(line)
