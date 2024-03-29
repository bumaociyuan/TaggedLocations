
/*
     File: APLEditableTableViewCell.h
 Abstract: Table view cell to present an editable text field to display tag names.
 The cell layout is mainly defined in the storyboard, but some Auto Layout constraints are redefined programmatically.
 
  Version: 2.3
 

 
 */


@interface APLEditableTableViewCell : UITableViewCell

@property (nonatomic, weak, readonly) UITextField *textField;

@end
