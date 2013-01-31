/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/WebKit.framework/WebKit
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@class NSArray, WebResource;

@interface WebArchivePrivate : NSObject  {
    WebResource *cachedMainResource;
    NSArray *cachedSubresources;
    NSArray *cachedSubframeArchives;
    struct RefPtr<WebCore::LegacyWebArchive> { 
        struct LegacyWebArchive {} *m_ptr; 
    } coreArchive;
}

+ (void)initialize;

- (void)setCoreArchive:(struct PassRefPtr<WebCore::LegacyWebArchive> { struct LegacyWebArchive {} *x1; })arg1;
- (struct LegacyWebArchive { int (**x1)(); int x2; struct RefPtr<WebCore::ArchiveResource> { struct ArchiveResource {} *x_3_1_1; } x3; struct Vector<WTF::RefPtr<WebCore::ArchiveResource>, 0> { unsigned int x_4_1_1; struct VectorBuffer<WTF::RefPtr<WebCore::ArchiveResource>, 0> { struct RefPtr<WebCore::ArchiveResource> {} *x_2_2_1; unsigned int x_2_2_2; } x_4_1_2; } x4; struct Vector<WTF::RefPtr<WebCore::Archive>, 0> { unsigned int x_5_1_1; struct VectorBuffer<WTF::RefPtr<WebCore::Archive>, 0> { struct RefPtr<WebCore::Archive> {} *x_2_2_1; unsigned int x_2_2_2; } x_5_1_2; } x5; }*)coreArchive;
- (id)initWithCoreArchive:(struct PassRefPtr<WebCore::LegacyWebArchive> { struct LegacyWebArchive {} *x1; })arg1;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)dealloc;
- (id)init;

@end
