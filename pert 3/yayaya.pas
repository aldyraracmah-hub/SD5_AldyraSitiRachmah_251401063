program Kalimat;

label
  a, b, c, d, e, f, g, h, i;

begin
  goto f;

d:
  write('ilmu ');
  goto h;

b:
  write('jurusan ');
  goto d;

c:
  write('sumatera ');
  goto g;

a:
  write('mahasiswa ');
  goto b;

e:
  write('universitas ');
  goto c;

f:
  write('saya ');
  goto a;

g:
  write('utara');
  goto i;

h:
  writeln('komputer ');
  goto e;

i:
end.