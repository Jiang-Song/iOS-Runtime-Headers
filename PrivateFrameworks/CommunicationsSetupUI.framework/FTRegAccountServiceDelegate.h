/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CommunicationsSetupUI.framework/CommunicationsSetupUI
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class CNFRegController, IDSAccountController, NSDictionary, NSString;

@interface FTRegAccountServiceDelegate : NSObject <AAAppleIDLoginPlugin, AASetupAssistantDelegateService> {
    IDSAccountController *_accountController;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _completionHandler;

    CNFRegController *_regController;
    NSDictionary *_responseDictionary;
}

@property(retain) IDSAccountController * accountController;
@property(copy) id completionHandler;
@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned int hash;
@property(retain) CNFRegController * regController;
@property(copy) NSDictionary * responseDictionary;
@property(readonly) Class superclass;

- (BOOL)_account:(id)arg1 matchesSetupParameters:(id)arg2;
- (void)_cleanup;
- (id)_defaultSetupRequestParameters;
- (id)_existingAccountForSetupParameters:(id)arg1;
- (id)_existingOperationalAccount;
- (void)_handleFailureWithErrorCode:(int)arg1;
- (void)_handleSuccess:(BOOL)arg1 error:(id)arg2;
- (BOOL)_hasAccount;
- (BOOL)_hasOperationalAccount;
- (id)_logName;
- (BOOL)_shouldSkipAccountSetup:(id)arg1;
- (id)accountController;
- (id)accountSetupRequestParameters;
- (void)completeSetupWithResponseParameters:(id)arg1 handler:(id)arg2;
- (id)completionHandler;
- (void)dealloc;
- (id)delegateServiceIdentifier;
- (id)displayName;
- (void)handleLoginResponse:(id)arg1 completion:(id)arg2;
- (id)init;
- (id)initWithRegController:(id)arg1;
- (id)name;
- (id)parametersForIdentityEstablishmentRequest;
- (id)parametersForLoginRequest;
- (id)regController;
- (id)responseDictionary;
- (id)serviceIdentifier;
- (BOOL)serviceIsAvailable;
- (int)serviceType;
- (void)setAccountController:(id)arg1;
- (void)setCompletionHandler:(id)arg1;
- (void)setRegController:(id)arg1;
- (void)setResponseDictionary:(id)arg1;
- (void)setupOperationFailed;

@end
