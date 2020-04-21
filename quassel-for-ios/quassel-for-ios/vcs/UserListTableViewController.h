// Dual-Licensed, GPLv3 and Woboq GmbH's private license. See file "LICENSE"

#import <UIKit/UIKit.h>
#import "UserListTableViewHeader.h"

@interface UserListTableViewController : UITableViewController

@property (nonatomic, strong) NSArray *nicks;
@property (nonatomic) SEL callbackSelector;
@property (nonatomic, weak) id callbackObject;

@property (nonatomic, strong) IBOutlet UIBarButtonItem *cancelButton;

@property (nonatomic, strong) UserListTableViewHeader *userListTableViewHeader;

@end
