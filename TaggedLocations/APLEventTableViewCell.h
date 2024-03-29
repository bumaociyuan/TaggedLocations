
/*
     File: APLEventTableViewCell.h
 Abstract: Table view cell to display information about an event.
 The cell layout is mainly defined in the storyboard, but some Auto Layout constraints are redefined programmatically.
 
  Version: 2.3
 

 
*/


@class APLEvent;

@interface APLEventTableViewCell : UITableViewCell

@property (nonatomic, weak) IBOutlet UIViewController *delegate;

- (void)configureWithEvent:(APLEvent *)event;
- (BOOL)makeNameFieldFirstResponder;

@end

