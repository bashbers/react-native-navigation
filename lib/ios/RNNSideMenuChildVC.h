#import <UIKit/UIKit.h>
#import "RNNParentProtocol.h"

typedef NS_ENUM(NSInteger, RNNSideMenuChildType) {
	RNNSideMenuChildTypeCenter,
	RNNSideMenuChildTypeLeft,
	RNNSideMenuChildTypeRight,
};


@interface RNNSideMenuChildVC : UIViewController <RNNParentProtocol>

@property (readonly) RNNSideMenuChildType type;
@property (readonly) UIViewController<RNNParentProtocol> *child;

@property (nonatomic, retain) RNNLayoutInfo* layoutInfo;
@property (nonatomic, retain) RNNBasePresenter* presenter;
@property (nonatomic, strong) RNNNavigationOptions* options;

- (instancetype)initWithLayoutInfo:(RNNLayoutInfo *)layoutInfo options:(RNNNavigationOptions *)options presenter:(RNNBasePresenter *)presenter type:(RNNSideMenuChildType)type;

@end
