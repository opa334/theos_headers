typedef NS_ENUM(NSUInteger, UIStatusBarItemViewTextStyle) {
	UIStatusBarItemViewTextStyleRegular,
	UIStatusBarItemViewTextStyleBold
};

typedef NSUInteger UIStatusBarItemViewActions; // TODO

@class UIStatusBarItem, UIStatusBarForegroundStyleAttributes, _UILegibilityImageSet;

@interface UIStatusBarItemView : UIView

- (instancetype)initWithItem:(UIStatusBarItem *)item data:(id)data actions:(UIStatusBarItemViewActions)actions style:(UIStatusBarForegroundStyleAttributes *)style;

- (_UILegibilityImageSet *)imageWithShadowNamed:(NSString *)imageName;
- (_UILegibilityImageSet *)imageWithText:(NSString *)text;

@property (nonatomic, retain) UIStatusBarForegroundStyleAttributes *foregroundStyle;

@end