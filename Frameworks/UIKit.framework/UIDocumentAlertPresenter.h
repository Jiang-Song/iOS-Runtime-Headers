/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class NSError, NSString, UIAlertView;

@interface UIDocumentAlertPresenter : NSObject <UIAlertViewDelegate> {
    UIAlertView *_alert;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _completionHandler;

    NSError *_error;
}

@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

+ (id)_presentAlertWithError:(id)arg1 completionHandler:(id)arg2;

- (void)_forceFinishNow;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(int)arg2;
- (void)alertViewCancel:(id)arg1;
- (void)dealloc;
- (id)initWithError:(id)arg1 completionHandler:(id)arg2;

@end
