#ifndef EXTERNS_H
#define EXTERNS_H

#define YASM_CMOVOR_START 1
#define YASM_CMOVOR_END 37

#ifdef __cplusplus
extern "C" {
#endif

void assemblyhi();
void yasm_cmov_or_ex(int i);

#ifdef __cplusplus
}
#endif

#endif

