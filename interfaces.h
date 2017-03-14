@interface WiFiManager : NSObject

@property(nonatomic) BOOL enabled;

@end

@interface PSListController : UIViewController {
	UITableView *_table;
}

- (void)WTT_addTopSeparatorToView:(UIView*)view;
- (BOOL)WTT_isAPNetworksController;

@end

@interface APNetworksController : PSListController {
	WiFiManager *_manager;
}

@end
