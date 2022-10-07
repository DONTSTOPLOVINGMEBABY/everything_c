import functions

## Create lists of initial files in both directories ## 
functions.create_list_of_master_files()
functions.create_list_of_secondary_files()

## Make lists of what needs to be copied, deleted, and checked for modification time ##
functions.make_list_of_items_to_delete()
functions.make_list_of_items_to_copy()
functions.make_list_of_items_to_compare_time_modification()

## Delete, Copy, and Replace Proper Files ##
functions.deleteFiles()
functions.copyFiles()
functions.replace_modified_files()

## Exit Stats ##
functions.exit_routine()
