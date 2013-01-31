/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/Search.framework/Search
 */

@class SPContentResult, NSString;

@interface SPTopHitsCompoundResult : NSObject  {
    SPContentResult *_content;
    unsigned int _domain;
    NSString *_displayIdentifier;
}


- (void)dealloc;
- (id)initWithContent:(id)arg1 domain:(unsigned int)arg2 displayIdentifier:(id)arg3;
- (unsigned int)domain;
- (id)content;
- (id)displayIdentifier;

@end
