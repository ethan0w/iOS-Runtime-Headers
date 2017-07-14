/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MetalKit.framework/MetalKit
 */

@interface MTKTextureLoader : NSObject {
    <MTLCommandQueue> * _blitQueue;
    <TXRBufferAllocator> * _bufferAllocator;
    <MTLDevice> * _device;
    NSObject<OS_dispatch_queue> * _loadQueue;
    NSObject<OS_dispatch_semaphore> * _loadSemaphore;
    NSObject<OS_dispatch_queue> * _notifyQueue;
    NSObject<OS_dispatch_queue> * _uploadQueue;
}

@property (nonatomic, readonly) <MTLDevice> *device;

- (unsigned int)_determineFileType:(id)arg1;
- (void)_loadCGImage:(struct CGImage { }*)arg1 options:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)_loadData:(id)arg1 options:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)_loadData:(id)arg1 options:(id)arg2 uploader:(id)arg3 label:(id)arg4 completionHandler:(id /* block */)arg5;
- (void)_loadMDLTexture:(id)arg1 options:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)_newAsyncTextureWithNames:(id)arg1 scaleFactor:(float)arg2 displayGamut:(int)arg3 bundle:(id)arg4 options:(id)arg5 completionHandler:(id /* block */)arg6;
- (void)dealloc;
- (id)device;
- (id)initWithDevice:(id)arg1;
- (void)newTextureWithCGImage:(struct CGImage { }*)arg1 options:(id)arg2 completionHandler:(id /* block */)arg3;
- (id)newTextureWithCGImage:(struct CGImage { }*)arg1 options:(id)arg2 error:(id*)arg3;
- (void)newTextureWithContentsOfURL:(id)arg1 options:(id)arg2 completionHandler:(id /* block */)arg3;
- (id)newTextureWithContentsOfURL:(id)arg1 options:(id)arg2 error:(id*)arg3;
- (void)newTextureWithData:(id)arg1 options:(id)arg2 completionHandler:(id /* block */)arg3;
- (id)newTextureWithData:(id)arg1 options:(id)arg2 error:(id*)arg3;
- (void)newTextureWithMDLTexture:(id)arg1 options:(id)arg2 completionHandler:(id /* block */)arg3;
- (id)newTextureWithMDLTexture:(id)arg1 options:(id)arg2 error:(id*)arg3;
- (void)newTextureWithName:(id)arg1 scaleFactor:(float)arg2 bundle:(id)arg3 options:(id)arg4 completionHandler:(id /* block */)arg5;
- (id)newTextureWithName:(id)arg1 scaleFactor:(float)arg2 bundle:(id)arg3 options:(id)arg4 error:(id*)arg5;
- (void)newTextureWithName:(id)arg1 scaleFactor:(float)arg2 displayGamut:(int)arg3 bundle:(id)arg4 options:(id)arg5 completionHandler:(id /* block */)arg6;
- (id)newTextureWithName:(id)arg1 scaleFactor:(float)arg2 displayGamut:(int)arg3 bundle:(id)arg4 options:(id)arg5 error:(id*)arg6;
- (void)newTexturesWithContentsOfURLs:(id)arg1 options:(id)arg2 completionHandler:(id /* block */)arg3;
- (id)newTexturesWithContentsOfURLs:(id)arg1 options:(id)arg2 error:(id*)arg3;
- (void)newTexturesWithNames:(id)arg1 scaleFactor:(float)arg2 bundle:(id)arg3 options:(id)arg4 completionHandler:(id /* block */)arg5;
- (void)newTexturesWithNames:(id)arg1 scaleFactor:(float)arg2 displayGamut:(int)arg3 bundle:(id)arg4 options:(id)arg5 completionHandler:(id /* block */)arg6;
- (id)newUploaderForOptions:(id)arg1;
- (bool)validateGenerateMipmapsForPixelFormat:(unsigned int)arg1 options:(id)arg2 error:(id*)arg3;

@end
