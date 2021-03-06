/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@class NSString, NSURL, SKComposeReviewViewController;

@interface SUComposeReviewViewController : SUViewController <SKComposeReviewDelegate> {
    NSURL *_compositionURL;
    SKComposeReviewViewController *_remoteViewController;
}

@property(readonly) NSURL * compositionURL;
@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

- (void)_showRemoteView;
- (BOOL)automaticallyForwardAppearanceAndRotationMethodsToChildViewControllers;
- (id)compositionURL;
- (id)copyScriptViewController;
- (void)dealloc;
- (id)init;
- (id)initWithCompositionURL:(id)arg1;
- (void)loadView;
- (void)prepareWithCompletionBlock:(id)arg1;
- (void)reviewComposeViewControllerDidFinish:(id)arg1;

@end
