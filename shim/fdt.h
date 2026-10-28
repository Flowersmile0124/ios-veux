#pragma once
#include <stdint.h>

/* Read a u32/u64 (cell-size agnostic) property of /chosen. Returns 0 if absent. */
int fdt_chosen_u64(uintptr_t fdt, const char *prop, uint64_t *out);

/*
 * Read up to max (base, size) pairs from the reg of the top-level memory
 * node(s), assuming 2 address and 2 size cells. Returns the number read.
 */
int fdt_memory_reg(uintptr_t fdt, uint64_t *base, uint64_t *size, int max);
