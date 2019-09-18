#import "CBDContentView.h"

@interface CBDContentViewSettings : CBDContentView <UITableViewDelegate, UITableViewDataSource>

@property (nonatomic, strong) UITableView *tableView;
@property (nonatomic, strong) UIButton *saveButton;
@property (nonatomic, strong) UIButton *removeAllButton;
@property (nonatomic, strong) UIButton *resetButton;
@property (nonatomic, strong) UIButton *showButton;

@property (nonatomic, strong) UIView *emptyView;
@property (nonatomic, strong) UILabel *listEmptyLabel;

@end