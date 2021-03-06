/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Photos.framework/Photos
 */

@class NSData, NSString, PHAsset;

@interface PHAssetDuplicateProperties : NSObject {
    PHAsset *_asset;
    NSData *_originalHash;
    NSString *_publicGlobalUUID;
}

@property(readonly) PHAsset * asset;
@property(retain) NSData * originalHash;
@property(retain) NSString * publicGlobalUUID;

- (void).cxx_destruct;
- (id)asset;
- (id)initWithFetchDictionary:(id)arg1 asset:(id)arg2;
- (id)originalHash;
- (id)publicGlobalUUID;
- (void)setOriginalHash:(id)arg1;
- (void)setPublicGlobalUUID:(id)arg1;

@end
