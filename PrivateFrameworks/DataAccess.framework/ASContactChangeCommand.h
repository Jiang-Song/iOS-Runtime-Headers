/* Generated by RuntimeBrowser on iPhone OS 2.2.1
   Image: /System/Library/PrivateFrameworks/DataAccess.framework/DataAccess
 */

@class ASContact;



@interface ASContactChangeCommand : ASSyncTaskCommand 
{
    ASContact *_contact;
}


- (id)initWithContact:(id)arg1;
- (void)appendApplicationDataForTask:(id)arg1 toWBXMLData:(id)arg2;
- (void)dealloc;
- (id)serverID;

@end