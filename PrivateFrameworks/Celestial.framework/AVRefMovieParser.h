/* Generated by RuntimeBrowser on iPhone OS 2.2.1
   Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

@class NSURL, NSThread, AVByteStream;



@interface AVRefMovieParser : NSObject 
{
    NSURL *_url;
    AVByteStream *_byteStream;
    NSThread *_processingThread;
}


- (id)initWithURL:(id)arg1 byteStream:(id)arg2;
- (void)dealloc;
- (void)work:(id)arg1;
- (void)parse;
- (void)cancel;

@end