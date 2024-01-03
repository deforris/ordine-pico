    // Window-related functions
    void InitWindow(int width, int height, const char *title);  // Initialize window and OpenGL context
    void CloseWindow(void);                                     // Close window and unload OpenGL context
    bool WindowShouldClose(void);                               // Check if application should close (KEY_ESCAPE pressed or windows close icon clicked)
    bool IsWindowReady(void);                                   // Check if window has been initialized successfully
    bool IsWindowFullscreen(void);                              // Check if window is currently fullscreen
    bool IsWindowHidden(void);                                  // Check if window is currently hidden (only PLATFORM_DESKTOP)
    bool IsWindowMinimized(void);                               // Check if window is currently minimized (only PLATFORM_DESKTOP)
    bool IsWindowMaximized(void);                               // Check if window is currently maximized (only PLATFORM_DESKTOP)
    bool IsWindowFocused(void);                                 // Check if window is currently focused (only PLATFORM_DESKTOP)
    bool IsWindowResized(void);                                 // Check if window has been resized last frame
    bool IsWindowState(unsigned int flag);                      // Check if one specific window flag is enabled
    void SetWindowState(unsigned int flags);                    // Set window configuration state using flags (only PLATFORM_DESKTOP)
    void ClearWindowState(unsigned int flags);                  // Clear window configuration state flags
    void ToggleFullscreen(void);                                // Toggle window state: fullscreen/windowed (only PLATFORM_DESKTOP)
    void ToggleBorderlessWindowed(void);                        // Toggle window state: borderless windowed (only PLATFORM_DESKTOP)
    void MaximizeWindow(void);                                  // Set window state: maximized, if resizable (only PLATFORM_DESKTOP)
    void MinimizeWindow(void);                                  // Set window state: minimized, if resizable (only PLATFORM_DESKTOP)
    void RestoreWindow(void);                                   // Set window state: not minimized/maximized (only PLATFORM_DESKTOP)
    void SetWindowIcon(Image image);                            // Set icon for window (single image, RGBA 32bit, only PLATFORM_DESKTOP)
    void SetWindowIcons(Image *images, int count);              // Set icon for window (multiple images, RGBA 32bit, only PLATFORM_DESKTOP)
    void SetWindowTitle(const char *title);                     // Set title for window (only PLATFORM_DESKTOP and PLATFORM_WEB)
    void SetWindowPosition(int x, int y);                       // Set window position on screen (only PLATFORM_DESKTOP)
    void SetWindowMonitor(int monitor);                         // Set monitor for the current window
    void SetWindowMinSize(int width, int height);               // Set window minimum dimensions (for FLAG_WINDOW_RESIZABLE)
    void SetWindowMaxSize(int width, int height);               // Set window maximum dimensions (for FLAG_WINDOW_RESIZABLE)
    void SetWindowSize(int width, int height);                  // Set window dimensions
    void SetWindowOpacity(float opacity);                       // Set window opacity [0.0f..1.0f] (only PLATFORM_DESKTOP)
    void SetWindowFocused(void);                                // Set window focused (only PLATFORM_DESKTOP)
    void *GetWindowHandle(void);                                // Get native window handle
    int GetScreenWidth(void);                                   // Get current screen width
    int GetScreenHeight(void);                                  // Get current screen height
    int GetRenderWidth(void);                                   // Get current render width (it considers HiDPI)
    int GetRenderHeight(void);                                  // Get current render height (it considers HiDPI)
    int GetMonitorCount(void);                                  // Get number of connected monitors
    int GetCurrentMonitor(void);                                // Get current connected monitor
    Vector2 GetMonitorPosition(int monitor);                    // Get specified monitor position
    int GetMonitorWidth(int monitor);                           // Get specified monitor width (current video mode used by monitor)
    int GetMonitorHeight(int monitor);                          // Get specified monitor height (current video mode used by monitor)
    int GetMonitorPhysicalWidth(int monitor);                   // Get specified monitor physical width in millimetres
    int GetMonitorPhysicalHeight(int monitor);                  // Get specified monitor physical height in millimetres
    int GetMonitorRefreshRate(int monitor);                     // Get specified monitor refresh rate
    Vector2 GetWindowPosition(void);                            // Get window position XY on monitor
    Vector2 GetWindowScaleDPI(void);                            // Get window scale DPI factor
    const char *GetMonitorName(int monitor);                    // Get the human-readable, UTF-8 encoded name of the specified monitor
    void SetClipboardText(const char *text);                    // Set clipboard text content
    const char *GetClipboardText(void);                         // Get clipboard text content
    void EnableEventWaiting(void);                              // Enable waiting for events on EndDrawing(), no automatic event polling
    void DisableEventWaiting(void);                             // Disable waiting for events on EndDrawing(), automatic events polling
