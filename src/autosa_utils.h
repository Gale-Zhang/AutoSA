#ifndef _AUTOSA_UTILS_H
#define _AUTOSA_UTILS_H

#include <isl/ast.h>
#include <isl/id.h>
#include <isl/id_to_ast_expr.h>

#include <pet.h>

#include "ppcg.h"
#include "ppcg_options.h"

__isl_give isl_union_map *extract_sizes_from_str(isl_ctx *ctx, const char *str);

__isl_give isl_basic_map_list *isl_union_map_get_basic_map_list(
  __isl_keep isl_union_map *umap);
isl_size isl_union_map_n_basic_map(__isl_keep isl_union_map *umap);
__isl_give isl_basic_map *isl_basic_map_from_map(__isl_take isl_map *map);

__isl_give isl_union_set *isl_multi_union_pw_aff_nonneg_union_set(
  __isl_take isl_multi_union_pw_aff *mupa);
__isl_give isl_union_set *isl_union_pw_aff_nonneg_union_set(
  __isl_take isl_union_pw_aff *upa);
__isl_give isl_union_set *isl_multi_union_pw_aff_non_zero_union_set(
  __isl_take isl_multi_union_pw_aff *mupa);
__isl_give isl_union_set *isl_union_pw_aff_non_zero_union_set(
  __isl_take isl_union_pw_aff *upa);

void print_mat(FILE *fp, __isl_keep isl_mat *mat);
int isl_vec_cmp(__isl_keep isl_vec *vec1, __isl_keep isl_vec *vec2);
char *concat(isl_ctx *ctx, const char *a, const char *b);
bool isl_vec_is_zero(__isl_keep isl_vec *vec);
int suffixcmp(const char *s, const char *suffix);

#endif