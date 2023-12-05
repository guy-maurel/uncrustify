/**
 * @file too_big_for_nl_max.cpp
 *
 * @author  Guy Maurel Decembe 2023
 * @license GPL v2+
 */

#include "too_big_for_nl_max.h"

#include "log_levels.h"
#include "log_rules.h"
#include "logger.h"
#include "options.h"

#include <cstdio>

constexpr static auto LCURRENT = LINDENT;

using namespace std;
using namespace uncrustify;


void too_big_for_nl_max()
{
   size_t nl_max_local = options::nl_max();

   if (options::nl_var_def_blk_end_func_top() > nl_max_local)
   {
      fprintf(stderr, "The option 'nl_var_def_blk_end_func_top' is too big against the option 'nl_max'\n");
      log_flush(true);
      exit(EX_CONFIG);
   }

   if (options::nl_var_def_blk_end() > nl_max_local)
   {
      fprintf(stderr, "The option 'nl_var_def_blk_end' is too big against the option 'nl_max'\n");
      log_flush(true);
      exit(EX_CONFIG);
   }

   if (options::nl_var_def_blk_start() > nl_max_local)
   {
      fprintf(stderr, "The option 'nl_var_def_blk_start' is too big against the option 'nl_max'\n");
      log_flush(true);
      exit(EX_CONFIG);
   }

   if (options::nl_var_def_blk_in() > nl_max_local)
   {
      fprintf(stderr, "The option 'nl_var_def_blk_in' is too big against the option 'nl_max'\n");
      log_flush(true);
      exit(EX_CONFIG);
   }

   if (options::nl_after_access_spec() > nl_max_local)
   {
      fprintf(stderr, "The option 'nl_after_access_spec' is too big against the option 'nl_max'\n");
      log_flush(true);
      exit(EX_CONFIG);
   }

   if (options::nl_start_of_file_min() > nl_max_local)
   {
      fprintf(stderr, "The option 'nl_start_of_file_min' is too big against the option 'nl_max'\n");
      log_flush(true);
      exit(EX_CONFIG);
   }

   if (options::nl_end_of_file_min() > nl_max_local)
   {
      fprintf(stderr, "The option 'nl_end_of_file_min' is too big against the option 'nl_max'\n");
      log_flush(true);
      exit(EX_CONFIG);
   }

   if (options::nl_inside_empty_func() > nl_max_local)
   {
      fprintf(stderr, "The option 'nl_inside_empty_func' is too big against the option 'nl_max'\n");
      log_flush(true);
      exit(EX_CONFIG);
   }

   if (options::nl_before_func_body_proto() > nl_max_local)
   {
      fprintf(stderr, "The option 'nl_before_func_body_proto' is too big against the option 'nl_max'\n");
      log_flush(true);
      exit(EX_CONFIG);
   }

   if (options::nl_before_func_body_def() > nl_max_local)
   {
      fprintf(stderr, "The option 'nl_before_func_body_def' is too big against the option 'nl_max'\n");
      log_flush(true);
      exit(EX_CONFIG);
   }

   if (options::nl_before_func_class_proto() > nl_max_local)
   {
      fprintf(stderr, "The option 'nl_before_func_class_proto' is too big against the option 'nl_max'\n");
      log_flush(true);
      exit(EX_CONFIG);
   }

   if (options::nl_before_func_class_def() > nl_max_local)
   {
      fprintf(stderr, "The option 'nl_before_func_class_def' is too big against the option 'nl_max'\n");
      log_flush(true);
      exit(EX_CONFIG);
   }

   if (options::nl_after_func_proto() > nl_max_local)
   {
      fprintf(stderr, "The option 'nl_after_func_proto' is too big against the option 'nl_max'\n");
      log_flush(true);
      exit(EX_CONFIG);
   }

   if (options::nl_after_func_proto_group() > nl_max_local)
   {
      fprintf(stderr, "The option 'nl_after_func_proto_group' is too big against the option 'nl_max'\n");
      log_flush(true);
      exit(EX_CONFIG);
   }

   if (options::nl_after_func_class_proto() > nl_max_local)
   {
      fprintf(stderr, "The option 'nl_after_func_class_proto' is too big against the option 'nl_max'\n");
      log_flush(true);
      exit(EX_CONFIG);
   }

   if (options::nl_after_func_class_proto_group() > nl_max_local)
   {
      fprintf(stderr, "The option 'nl_after_func_class_proto_group' is too big against the option 'nl_max'\n");
      log_flush(true);
      exit(EX_CONFIG);
   }

   if (options::nl_after_func_body() > nl_max_local)
   {
      fprintf(stderr, "The option 'nl_after_func_body' is too big against the option 'nl_max'\n");
      log_flush(true);
      exit(EX_CONFIG);
   }

   if (options::nl_min_after_func_body() > nl_max_local)
   {
      fprintf(stderr, "The option 'nl_min_after_func_body' is too big against the option 'nl_max'\n");
      log_flush(true);
      exit(EX_CONFIG);
   }

   if (options::nl_after_func_body_class() > nl_max_local)
   {
      fprintf(stderr, "The option 'nl_after_func_body_class' is too big against the option 'nl_max'\n");
      log_flush(true);
      exit(EX_CONFIG);
   }

   if (options::nl_after_func_body_one_liner() > nl_max_local)
   {
      fprintf(stderr, "The option 'nl_after_func_body_one_liner' is too big against the option 'nl_max'\n");
      log_flush(true);
      exit(EX_CONFIG);
   }

   if (options::nl_typedef_blk_start() > nl_max_local)
   {
      fprintf(stderr, "The option 'nl_typedef_blk_start' is too big against the option 'nl_max'\n");
      log_flush(true);
      exit(EX_CONFIG);
   }

   if (options::nl_typedef_blk_end() > nl_max_local)
   {
      fprintf(stderr, "The option 'nl_typedef_blk_end' is too big against the option 'nl_max'\n");
      log_flush(true);
      exit(EX_CONFIG);
   }

   if (options::nl_before_block_comment() > nl_max_local)
   {
      fprintf(stderr, "The option 'nl_before_block_comment' is too big against the option 'nl_max'\n");
      log_flush(true);
      exit(EX_CONFIG);
   }

   if (options::nl_before_c_comment() > nl_max_local)
   {
      fprintf(stderr, "The option 'nl_before_c_comment' is too big against the option 'nl_max'\n");
      log_flush(true);
      exit(EX_CONFIG);
   }

   if (options::nl_before_cpp_comment() > nl_max_local)
   {
      fprintf(stderr, "The option 'nl_before_cpp_comment' is too big against the option 'nl_max'\n");
      log_flush(true);
      exit(EX_CONFIG);
   }

   if (options::nl_before_struct() > nl_max_local)
   {
      fprintf(stderr, "The option 'nl_before_struct' is too big against the option 'nl_max'\n");
      log_flush(true);
      exit(EX_CONFIG);
   }

   if (options::nl_after_struct() > nl_max_local)
   {
      fprintf(stderr, "The option 'nl_after_struct' is too big against the option 'nl_max'\n");
      log_flush(true);
      exit(EX_CONFIG);
   }

   if (options::nl_before_class() > nl_max_local)
   {
      fprintf(stderr, "The option 'nl_before_class' is too big against the option 'nl_max'\n");
      log_flush(true);
      exit(EX_CONFIG);
   }

   if (options::nl_after_class() > nl_max_local)
   {
      fprintf(stderr, "The option 'nl_after_class' is too big against the option 'nl_max'\n");
      log_flush(true);
      exit(EX_CONFIG);
   }

   if (options::nl_before_namespace() > nl_max_local)
   {
      fprintf(stderr, "The option 'nl_before_namespace' is too big against the option 'nl_max'\n");
      log_flush(true);
      exit(EX_CONFIG);
   }

   if (options::nl_inside_namespace() > nl_max_local)
   {
      fprintf(stderr, "The option 'nl_inside_namespace' is too big against the option 'nl_max'\n");
      log_flush(true);
      exit(EX_CONFIG);
   }

   if (options::nl_after_namespace() > nl_max_local)
   {
      fprintf(stderr, "The option 'nl_after_namespace' is too big against the option 'nl_max'\n");
      log_flush(true);
      exit(EX_CONFIG);
   }

   if (options::nl_before_access_spec() > nl_max_local)
   {
      fprintf(stderr, "The option 'nl_before_access_spec' is too big against the option 'nl_max'\n");
      log_flush(true);
      exit(EX_CONFIG);
   }

   if (options::nl_after_access_spec() > nl_max_local)
   {
      fprintf(stderr, "The option 'nl_after_access_spec' is too big against the option 'nl_max'\n");
      log_flush(true);
      exit(EX_CONFIG);
   }

   if (options::nl_comment_func_def() > nl_max_local)
   {
      fprintf(stderr, "The option 'nl_comment_func_def' is too big against the option 'nl_max'\n");
      log_flush(true);
      exit(EX_CONFIG);
   }

   if (options::nl_after_try_catch_finally() > nl_max_local)
   {
      fprintf(stderr, "The option 'nl_after_try_catch_finally' is too big against the option 'nl_max'\n");
      log_flush(true);
      exit(EX_CONFIG);
   }

   if (options::nl_around_cs_property() > nl_max_local)
   {
      fprintf(stderr, "The option 'nl_around_cs_property' is too big against the option 'nl_max'\n");
      log_flush(true);
      exit(EX_CONFIG);
   }

   if (options::nl_between_get_set() > nl_max_local)
   {
      fprintf(stderr, "The option 'nl_between_get_set' is too big against the option 'nl_max'\n");
      log_flush(true);
      exit(EX_CONFIG);
   }

   if (options::nl_before_whole_file_ifdef() > nl_max_local)
   {
      fprintf(stderr, "The option 'nl_before_whole_file_ifdef' is too big against the option 'nl_max'\n");
      log_flush(true);
      exit(EX_CONFIG);
   }

   if (options::nl_after_whole_file_ifdef() > nl_max_local)
   {
      fprintf(stderr, "The option 'nl_after_whole_file_ifdef' is too big against the option 'nl_max'\n");
      log_flush(true);
      exit(EX_CONFIG);
   }

   if (options::nl_before_whole_file_endif() > nl_max_local)
   {
      fprintf(stderr, "The option 'nl_before_whole_file_endif' is too big against the option 'nl_max'\n");
      log_flush(true);
      exit(EX_CONFIG);
   }

   if (options::nl_after_whole_file_endif() > nl_max_local)
   {
      fprintf(stderr, "The option 'nl_after_whole_file_endif' is too big against the option 'nl_max'\n");
      log_flush(true);
      exit(EX_CONFIG);
   }
} // too_big_for_nl_max
