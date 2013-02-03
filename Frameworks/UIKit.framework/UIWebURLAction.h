/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIWebURLAction : NSObject {
}

+ (id)actionSheetForURL:(id)arg1 withAllowedTypes:(NSUInteger)arg2 inFrame:(id)arg3;
+ (BOOL)performActionWithTag:(NSInteger)arg1 forURL:(id)arg2 forFrame:(id)arg3 inView:(id)arg4 interactionDelegate:(id)arg5;
+ (BOOL)performActionWithTag:(NSInteger)arg1 forURL:(id)arg2 forFrame:(id)arg3 withPopoverController:(id)arg4 interactionDelegate:(id)arg5;
+ (BOOL)performDefaultActionForURL:(id)arg1 withAllowedTypes:(NSUInteger)arg2 forFrame:(id)arg3 inView:(id)arg4;
+ (id)sharedInstance;
+ (BOOL)shouldImmediatelyShowActionSheetForURL:(id)arg1 forFrame:(id)arg2;

- (void)dealloc;
- (BOOL)performDefaultActionForURL:(id)arg1 withAllowedTypes:(NSUInteger)arg2 forFrame:(id)arg3 inView:(id)arg4;

@end